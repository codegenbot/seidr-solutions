```
int choose_num(int x, int y) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(x, y);
    return dis(gen);
}