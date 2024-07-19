int main(){
    string class_name = "My";
    vector<string> extensions({"Java", "Python", "C++"}); 
    cout << Strongest_Extension(class_name, extensions) << endl;

    assert (Strongest_Extension("Sp", vector<string>({"671235", "Bb"})) == string("Sp.671235"));

    return 0;
}