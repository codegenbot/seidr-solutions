string txt;
cin >> txt;

bool result = (txt.length() > 0) && (isalpha(txt.back())) && (!any_of(txt.rbegin(), txt.rend(), ::isspace));
return result;