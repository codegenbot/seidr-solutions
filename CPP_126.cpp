```int main() {
    int n;
    std::cin >> n;
    std::vector<int> lst(n);
    for (int i = 0; i < n; i++) {
        std::cin >> lst[i];
    }
    if(is_sorted(lst)) {
        std::cout << "The array is sorted" << std::endl;
    } else {
        std::cout << "The array is not sorted" << std::endl;
    }
    return 0;
}

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
        int count = 0;
        for(int j = 0; j < lst.size(); j++){
            if(lst[j] == lst[i]){
                count++;
            }
        }
        if(count > 1){
            return false;
        }
    }
    return true;
}```