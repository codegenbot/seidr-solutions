```cpp
int sum = 0;
for (int i = n - 2; i >= 0; i -= 2) {
    int doubled = digits[i] * 2;
    if (doubled > 9) {
        doubled -= 9;
    }
    sum += doubled;
}

for (int i = n - 1; i >= 0; i -= 2) {
    sum += digits[i];
}

std::cout << sum << std::endl;
```