assert(file_name_check("s.") == "No");
assert(file_name_check("abc.txt") == "Yes");
assert(file_name_check("CSE_141.dll") == "Yes");
assert(file_name_check("file1.exe") == "Yes");
assert(file_name_check("12345.") == "No");
assert(file_name_check("1.txt") == "No");
assert(file_name_check("test.") == "No");