int n = a.length();
int m = b.length();
if (n != m) return false;
string temp = a + a;
return temp.find(b) != string::npos;
}