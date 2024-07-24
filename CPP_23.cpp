int my_strlen(const std::string& str){
    return str.length();
}

#include <cstring>

#include <string>
using namespace std;

int main()
{
   string s;
   cout<<"Enter a string: ";
   getline(cin,s);
   
   if(s.empty())
   {
      cout<<"Error! No input given.\n";
      return 1;
   }
   else
   {
      int len = my_strlen(s);
      
      cout<<"The length of the string is: "<<len<<endl;
   }
  
   return 0;
}