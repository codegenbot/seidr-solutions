float input;
int n = 0;

std::vector<float> lst;

while (1) {
    std::cout << "Enter a number (negative to stop): ";
    std::cin >> input;

    if (input < 0) break;
    lst.push_back(input);
    n++;
}

long long odd_sum = double_the_difference(lst);

int main() {
    return static_cast<int>(odd_sum);
}