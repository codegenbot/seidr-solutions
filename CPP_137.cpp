#include <boost/any.hpp>
#include <string>

int main() {
    std::string user_input;
    boost::any input;

    // Ask the user for some data
    std::cout << "Please enter your favorite color: ";
    std::cin >> user_input;

    // Check if the input is either 'red' or 'green'
    if (user_input == "red" || user_input == "green") {
        // Convert the string to a boost::any object
        input = boost::any(user_input);

        // Print out the input, whether it's 'red', 'green', or something else!
        std::cout << "You entered: " << boost::any_cast<std::string>(input) << std::endl;
    } else {
        std::cout << "Sorry, that's not a valid color." << std::endl;
    }

    return 0;
}