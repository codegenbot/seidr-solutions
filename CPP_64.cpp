transform(s.begin(), s.end(), s.begin(), ::tolower);

int count = 0;
bool lastY = false;

for (char c : s) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        count++;
        lastY = false;
    } else if(c == 'y') {
        if(lastY){
            count++;
            lastY = false;
        } else {
            lastY = true;
        }
    } else {
        lastY = false;
    }
}

return count;