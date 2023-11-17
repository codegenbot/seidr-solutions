#include<stdio.h>
#include<cmath>
double calculate_seconds(double h, double m, double s){
  h=h*3600.000;
  m=m*60.000;
  return fabs(h+m+s);
}
int main(){
  double h,m,s;
  h=10.00;
  m=20.00;
  s=30.00;
  printf("Time taken is %f",calculate_seconds(h,m,s));

}
