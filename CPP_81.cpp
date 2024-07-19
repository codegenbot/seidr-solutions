int main() 
{
    vector<float> grades;
    cout << "Enter the number of grades: ";
    int n; cin >> n;
    for(int i=0;i<n;++i) {
        float grade; 
        cout << "Enter grade #"<<(i+1<<": ";
        cin >> grade; 
        grades.push_back(grade);
    }
    vector<string> result = numerical_letter_grade(grades);
    for (string grade : result) {
        cout << grade << endl;
    }
    return 0;
}