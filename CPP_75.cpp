bool is_multiply_prime(int num);

bool is_multiply_prime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (is_multiply_prime(number)) {
        std::cout << number << " is a prime number and a multiple of itself." << std::endl;
    } else {
        std::cout << number << " is either not a prime number or not a multiple of itself." << std::endl;
    }

    return 0;
}