string txt;
cout << "Enter a string: ";
getline(cin, txt);

return (!txt.empty() && !isalnum(txt.back()));