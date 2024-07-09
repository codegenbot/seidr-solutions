int lena = a.length(), lenb = b.length();
if(lena != lenb) return false;
string combined = a + a;
return combined.find(b) != string::npos;
}