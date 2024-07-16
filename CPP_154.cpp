int n = a.length();
int m = b.length();
if(n != m) return false;

string doubleStr = a + a;

return doubleStr.find(b) != string::npos;
}