Here is the completed code:

bool iscuber(int a){
    int root = cbrt(a);
    if(root*root*root == a)
        return true;
    else
        return false;
}