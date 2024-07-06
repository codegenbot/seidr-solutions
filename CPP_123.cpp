int main {
    std::vector<std::vector<int>> sequences;
    for (int i = 1; i <= 10; ++i) {
        sequences.push_back(get_odd_collatz(i));
    }
    
    std::vector<int> allUnique;
    for (const auto& seq : sequences) {
        for (int num : seq) {
            bool unique = true;
            for (int j = 0; j < allUnique.size(); ++j) {
                if (allUnique[j] == num) {
                    unique = false;
                    break;
                }
            }
            if (unique)
                allUnique.push_back(num);
        }
    }
    
    std::sort(allUnique.begin(), allUnique.end());
    for (int i = 0; i < allUnique.size(); ++i) {
        if (allUnique[i] == allUnique[0]) {
            break;
        }
        std::cout << allUnique[i] << " ";
    }
    std::cout << std::endl;
}