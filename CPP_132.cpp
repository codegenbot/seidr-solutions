int count = 0;
	for(int i=0; i<str.length(); i++){
		if(str[i] == '[') count++;
		else if(str[i] == ']' && count > 0) count--;
	}
	return count < 0 || count > 0 ? true : false;
}