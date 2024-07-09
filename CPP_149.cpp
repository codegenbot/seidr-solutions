int issame(string a) {
    int sum = 0;
    for(int i=0; i<a.length(); i++) {
        if(a[i] == '1') 
            sum++;
    }
    return sum;
}

int main() {
    vector<string> lst;
    string temp;

    cout << "Enter words (end with -1):" << endl;
    while(true) {
        cin >> temp;
        if(temp == "-1")
            break;
        lst.push_back(temp);
    }

    vector<string> result = sorted_list_sum(lst);

    cout << "Sorted list: ";
    for(const auto& str : result)
        cout << str << " ";

    return 0;
}