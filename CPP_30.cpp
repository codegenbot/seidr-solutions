#include <initializer_list>

vector<float> get_positive(vector<float> l) {
    vector<float> result = {std::begin(l), std::end(std::filter_view<float>(l, [](float x){return x > 0;}))};
    return result;
}