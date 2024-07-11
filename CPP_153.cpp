int CAP(string s){int c=0;for(char ch:s)if(isupper(ch))++c;return c;}
int SM(string s){int c=0;for(char ch:s)if(islower(ch))++c;return c;}

string Strongest_Extension(string class_name,vector<string> extensions){
    string strongest = extensions[0];
    int max_strength = CAP(extensions[0]) - SM(extensions[0]);

    for(int i=1; i<extensions.size(); ++i){
        int strength = CAP(extensions[i]) - SM(extensions[i]);
        if(strength > max_strength){
            strongest = extensions[i];
            max_strength = strength;
        }
    }

    return class_name + "." + strongest;
}