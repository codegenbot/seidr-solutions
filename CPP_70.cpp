int strange_sort_list(std::vector<int> lst) {
    for(int i = 1; i < lst.size(); ++i) {
        int key = lst[i];
        int j = i - 1;
        
        while(j >= 0 && lst[j] > key)
            lst[j + 1] = lst[j--];

        lst[j+1] = key;
    }
    
    return 0;
}

int main() {
    std::vector<int> lst;
    int num;
    
    while(true) {
        std::cout << "Enter a number (or -1 to finish): ";
        std::cin >> num;

        if(num == -1) break;

        lst.push_back(num);
    }

    std::vector<int> result = strange_sort_list(lst);

    for(int n : result) {
        std::cout << n << " ";
    }
    
    return 0;
}