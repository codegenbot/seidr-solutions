```cpp
#include <boost/uuids/uuid.hpp>
#include <boost/uuids/uuid_generators.hpp>
#include <boost/uuids/random_generator.hpp>

int main() {
    boost::uuids::random_generator gen;
    boost::uuids::uuid uuid = gen();
    return 0;
}