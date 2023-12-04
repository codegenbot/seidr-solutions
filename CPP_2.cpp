```
#include<stdio.h>
#include<math.h>
using namespace std;

float truncate_number(float number) {
    float integerPart = floor(number);
    return (number - integerPart);
}

int main() {
    printf("Enter a positive floating point number: ");
    float input;
    scanf("%f", &input);
    printf("Decimal part of the number is: %.1f\n", truncate_number(input));
    return 0;
}
```