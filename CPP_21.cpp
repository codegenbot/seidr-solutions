bool issame( vector<float> numbers, vector<float> expected )
{
    float eps = 1e-6;
    if( numbers.size() != expected.size() )
        return false;
    
    for( size_t i = 0; i < numbers.size(); ++i )
    {
        if( abs( numbers[i] - expected[i] ) > eps )
            return false;
    }
    
    return true;
}

vector<float> rescale_to_unit( vector<float> numbers )
{
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }

    return rescaled_numbers;
}

int main() {
    vector<float> input = {2.0, 5.0, 8.0, 3.0, 1.0, 7.0};
    vector<float> expected_output = {0.125, 0.5, 1, 0.25, 0, 0.875};
    
    vector<float> rescaled = rescale_to_unit(input);
    
    if( issame(rescaled, expected_output) )
    {
        cout << "Code is correct!";
    }
    else
    {
        cout << "Code is incorrect!";
    }

    return 0;
}