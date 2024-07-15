for(int i=0; i<text.length(); ++i) {
        if(text[i] == ' ') {
            text[i] = '_';
            int count = 1;
            while(i+1 < text.length() && text[i+1] == ' ') {
                count++;
                i++;
            }
            if(count > 2) {
                text[i-count+1] = '-';
                for(int j=i-count+2; j<=i; ++j) {
                    text[j] = '_';
                }
            }
        }
    }
    return text;
}