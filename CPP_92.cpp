bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    if (ai == bi + ci || bi == ai + ci || ci == ai + bi)
        return true;
    else
        return false;
}

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    if (ai == bi + ci || bi == ai + ci || ci == ai + bi)
        return true;
    else
        return false;
}

int main() {
    float a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    
    if (any_int(a, b, c))
        std::cout << "The sum of any two numbers is the third number.\n";
    else
        std::cout << "The sum of any two numbers is not the third number.\n";
    
    return 0;
}