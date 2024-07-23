int pennies = cents;
std::cout << "Quarters: " << (pennies /= 25) << std::endl; 
pennies %= 25;

std::cout << "Pennies: " << (pennies /= 5) << std::endl; 
pennies %= 5;

std::cout << "Nickles: " << (pennies /= 10) << std::endl;
pennies %= 10;

std::cout << "Dimes: " << pennies << std::endl;