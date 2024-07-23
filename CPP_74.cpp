bool issame(vector<string> a,vector<string>b) {
    for(int i=0;i<a.size();i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> list1 = {"apple","banana"};
    vector<string> list2 = {"orange", "apple"};

    bool same = issame(list1, list2);
    
    if(same) {
        cout << "The two lists are the same";
    } else {
        cout << "The two lists are not the same";
    }
    return 0;
}