string encode(string message){
	    for(char& c: message){
	        if(isalpha(c)){
	            c = (char)(((c & 32) ? tolower(c) - 19 : toupper(c) + 19) - ((c | 32) & 6));
	            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
	                c += 2;
	            }
	        }
	    }
	    return message;
	}