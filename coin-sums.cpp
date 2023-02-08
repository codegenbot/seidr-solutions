#include <stdio.h>
int main(){
  int cents;
  scanf("%d", &cents);
  int quarters = cents / 25;
  cents = cents % 25;
  int dimes = cents / 10;
  cents = cents % 10;
  int nickles = cents / 5;
  cents = cents % 5;
  int pennies = cents;
  printf("%d\n%d\n%d\n%d\n", quarters, dimes, nickles, pennies);
  return 0;
}
