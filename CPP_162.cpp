std::string input_text;
std::cout << "Enter a text to convert to MD5: ";
std::cin >> input_text;

std::string md5_result = string_to_md5(input_text);
std::cout << "MD5 hash: " << md5_result << std::endl;