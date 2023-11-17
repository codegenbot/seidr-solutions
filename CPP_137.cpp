/*
Create a function that takes integers, floats, or strings representing
real numbers, and returns the larger variable in its given variable type.
Return "None" if the values are equal.
Note: If a real number is represented as a string, the floating point might be . or ,

compare_one(1, 2.5) ➞ 2.5
compare_one(1, "2,3") ➞ "2,3"
compare_one("5,1", "6") ➞ "6"
compare_one("1", 1) ➞ "None"
*/
#include<boost/any.hpp>
#include<iostream>

boost::any compare_one(boost::any a,boost::any b){
   int x;
   int y;
   string xs;
   string ys;
   try{
      x=boost::any_cast<int>(a);
   }
   catch(const boost::bad_any_cast&){
      x=INT_MIN;
   }
   try{
      y=boost::any_cast<int>(b);
   }
   catch(const boost::bad_any_cast&){
      y=INT_MIN;
   }
   if(x!=INT_MIN||y!=INT_MIN){
      return (x>y?a:b);
   }
   try{
      xs=boost::any_cast<string>(a);
   }
   catch(const boost::bad_any_cast&){
      xs="0";
   }
   try{
      ys=boost::any_cast<string>(b);
   }
   catch(const boost::bad_any_cast&){
      ys="0";
   }
   if(xs.length()==0){
      xs="0";
   }
   if(ys.length()==0){
      ys="0";
   }
   for(auto &i:xs){
      if(i=='.'||i==','){
         i=' ';
      }
   }
   for(auto &i:ys){
      if(i=='.'||i==','){
         i=' ';
      }
   }
   double xd;
   double yd;
   if(sscanf(xs.c_str(),"%lf",&xd)!=1){
      xd=0.0;
   }
   if(sscanf(ys.c_str(),"%lf",&yd)!=1){
      yd=0.0;
   }
   if(xd==yd){
      boost::any c="None";
      return c;
   }
   return (xd>yd?a:b);
}
