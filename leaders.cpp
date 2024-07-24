int main() {
    std::vector<int> vec = {16,17,4,3,5,2};
    std::vector<int> leaders = leaders(vec);
    for(int i=0;i<leaders.size();i++) {
        std::cout << leaders[i] << " ";
    }
    return 0;
}