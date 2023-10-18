#include<stdio.h>
int main(void)
{
    int num1 = 0, num2 = 0, num3 = 0;
    scanf("%d", &num1);
    if(getchar() != '\n')
        scanf("%d", &num2);
    if(getchar() != '\n')
        scanf("%d", &num3);
    printf("%d\n%d\n%d\n", num1, num2, num3);     
    return 0;
}
