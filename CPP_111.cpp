int main() {
    std::string test;
    std::cout << "Enter a string: ";
    using namespace std;
    std::cin >> test;

    auto hist = histogramTest(test); 

    for (auto p : hist) {
        cout << p.first << ": " << p.second << endl;
    }

    if (!issame(hist, {{'a', 1}})) { 
        return 0; 
    }
    
    return 0;
}