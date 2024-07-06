int main { 
    std::vector<int> lst;
    int num;

    while (true) {
        std::cout << "Enter a number (or -1 to finish): ";
        std::cin >> num;

        if (num == -1) break;

        lst.push_back(num);
    }

    std::vector<int> result = strange_sort_list(lst);

    for (int n : result) {
        std::cout << n << " ";
    }
    
    return 0;
}