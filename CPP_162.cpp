#include <iostream>
#include <string>
#include <boost/uuids.hpp>
#include <boost/uuids/uuid.hpp>
#include <boost/uuids/uuid_generators.hpp>
#include <boost/uuids/uuid_io.hpp>

using namespace boost::uuids;

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    uuid hash;
    for (char c : input) {
        hash.process_byte((unsigned char)c);
    }
    std::cout << "SHA-1 hash: " << std::hex << to_string(hash) << std::endl;
    return 0;
}