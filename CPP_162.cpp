#include <iostream>
#include <string>
#include <boost/uuids/uuid.hpp>
#include <boost/uuids/uuid_generators.hpp>

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    boost::uuids::detail::sha1_hash hash;
    for (char c : input) {
        hash.process_byte((unsigned char)c);
    }
    std::cout << "SHA-1 hash: " << std::hex << hash.hexdigest() << std::endl;
    return 0;
}