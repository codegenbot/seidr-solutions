int main 
{
    vector<float> a={1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    bool result = has_close_elements(a, 0.5);
    cout << "Result: " << (result ? "true" : "false") << endl;
    
    return 0;
}