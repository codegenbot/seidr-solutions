for(int i=0; i<l.size(); i+=3){
    int end = min(i+3, (int)l.size());
    sort(l.begin()+i, l.begin()+end);
}
return l;