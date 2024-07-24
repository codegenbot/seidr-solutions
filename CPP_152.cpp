```cpp
int main() {
    int n;
    while (!(std::cin >> n)) {
        std::cout << "Invalid input. Please enter an integer: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::vector<int> vec1;
    int size = 0;
    while (size < n) {
        int x;
        while (!(std::cin >> x)) {
            std::cout << "Invalid input. Please enter an integer: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        vec1.resize(size+1); 
        vec1[size] = x; 
        size++;
    }

    std::vector<int> vec2;
    size = 0;
    while (size < n) {
        int x;
        while (!(std::cin >> x)) {
            std::cout << "Invalid input. Please enter an integer: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        vec2.resize(size+1); 
        vec2[size] = x; 
        size++;
    }

    bool checkEquality = checkVectorEquality(vec1, vec2);

    if(checkEquality) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }

    return 0;
}