for(int i=0; i<xs.size()-1; i++){
    xs[i] = xs[i+1] * (i+1);
}
xs.pop_back();
return xs;