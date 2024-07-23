int pennies = cents;
std::cout << "Quarters: " << (pennies /= 25) << std::endl; 
pennies %= 25;

int nickles = pennies;
std::cout << "Nickles: " << (nickles /= 5) << std::endl;
nickles %= 5;

int dimes = nickles;
std::cout << "Dimes: " << (dimes /= 10) << std::endl;
dimes %= 10;

int remainder = dimes;
std::cout << "Pennies: " << remainder << std::endl;