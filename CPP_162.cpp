```cpp
#include <iostream>
#include <boost/uuids/uuid.hpp>
#include <boost/uuids/uuid_generators.hpp>
#include <boost/uuids/random_generator.hpp>

int main() {
    boost::uuids::random_generator gen;
    boost::uuids::uuid uuid = gen();
    std::cout << "Generated UUID: " << uuid << std::endl;
    return 0;
}