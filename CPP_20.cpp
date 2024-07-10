int main
{
    int n;
    std::vector<float> numbers;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i)
    {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }

    std::vector<std::pair<float, float>> closest_pair = find_closest_elements(numbers);

    if (closest_pair.size() == 0)
    {
        std::cout << "No pairs found." << std::endl;
    }
    else
    {
        for (auto& pair : closest_pair)
        {
            std::cout << "Closest pair: (" << pair.first << ", " << pair.second << ")" << std::endl;
        }
    }

}