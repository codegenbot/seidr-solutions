#include <string>
using namespace std;

string string_xor(string a, string b) {
  string result;
  for(int i=0; i<a.length(); i++){
    if(a[i] != b[i]){
      result += "1";
    } else {
      result += "0";
    }
  }
  return result;
}