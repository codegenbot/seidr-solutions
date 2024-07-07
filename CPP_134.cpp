string txt;
cout << "Enter a string: ";
getline(cin, txt);

return (txt.size() > 0 && !ispunct(txt.back()) && isalpha(txt.back()));