#include <boost/uuids/uuid.hpp>
#include <boost/uuids/uuid_generators.hpp>
#include <boost/uuids/uuid_io.hpp>

int main() {
    boost::uuids::uuid uuid = boost::uuids::random_generator()();
    std::cout << uuid << std::endl;
    return 0;
}