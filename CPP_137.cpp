#include <iostream>
#include <string>
#include <typeinfo>

class Any {
public:
    template<typename T>
    void store(const T& value) {
        data = value;
    }

    template<typename T>
    T retrieve() const {
        return boost::any_cast<T>(data);
    }

    bool isEmpty() const {
        return data.type() == typeid(void);
    }

private:
    boost::any data;
};

int main() {
    Any a, b;

    std::cout << "Enter the first value (1 for int, 2 for float, 3 for string): ";
    int typeA;
    std::cin >> typeA;
    
    if(typeA == 1) {
        int valA;
        std::cout << "Enter integer: ";
        std::cin >> valA;
        a.store(valA);
    } else if(typeA == 2) {
        float valA;
        std::cout << "Enter float: ";
        std::cin >> valA;
        a.store(valA);
    } else if(typeA == 3) {
        std::string valA;
        std::cout << "Enter string: ";
        std::getline(std::cin, valA);
        a.store(valA);
    }

    std::cout << "Enter the second value (1 for int, 2 for float, 3 for string): ";
    int typeB;
    std::cin >> typeB;

    if(typeB == 1) {
        int valB;
        std::cout << "Enter integer: ";
        std::cin >> valB;
        b.store(valB);
    } else if(typeB == 2) {
        float valB;
        std::cout << "Enter float: ";
        std::cin >> valB;
        b.store(valB);
    } else if(typeB == 3) {
        std::string valB;
        std::cout << "Enter string: ";
        std::getline(std::cin, valB);
        b.store(valB);
    }

    if(a.isEmpty() || b.isEmpty()) {
        std::cout << "One or both values are empty." << std::endl;
    } else {
        std::string result;

        if(typeA == 1 && typeB == 2) {
            int valA = a.retrieve<int>();
            float valB = b.retrieve<float>();

            if(valA < valB) {
                result = "a";
            } else if(valA > valB) {
                result = "b";
            } else {
                result = "equal";
            }
        } else if(typeA == 2 && typeB == 3) {
            float valA = a.retrieve<float>();
            std::string valB = b.retrieve<std::string>();

            if(atof(valB.c_str()) > valA) {
                result = "b";
            } else if(atof(valB.c_str()) < valA) {
                result = "a";
            } else {
                result = "equal";
            }
        } else if(typeA == 3 && typeB == 2) {
            std::string valA = a.retrieve<std::string>();
            float valB = b.retrieve<float>();

            if(atof(valA.c_str()) > valB) {
                result = "a";
            } else if(atof(valA.c_str()) < valB) {
                result = "b";
            } else {
                result = "equal";
            }
        } else if(typeA == 1 && typeB == 3) {
            int valA = a.retrieve<int>();
            std::string valB = b.retrieve<std::string>();

            if(valA > std::stoi(valB)) {
                result = "a";
            } else if(std::stoi(valB) > valA) {
                result = "b";
            } else {
                result = "equal";
            }
        } else if(typeA == 3 && typeB == 3) {
            std::string valA = a.retrieve<std::string>();
            std::string valB = b.retrieve<std::string>();

            if(valA > valB) {
                result = "a";
            } else if(valA < valB) {
                result = "b";
            } else {
                result = "equal";
            }
        } else if(typeA == 1 && typeB == 1) {
            int valA = a.retrieve<int>();
            int valB = b.retrieve<int>();

            if(valA > valB) {
                result = "a";
            } else if(valA < valB) {
                result = "b";
            } else {
                result = "equal";
            }
        }

        std::cout << "The comparison result is: " << result << std::endl;
    }

    return 0;
}