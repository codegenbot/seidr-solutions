if(x == 1)
       return true;
   int root = round(pow(x, 1.0/n));
   return pow(root, n) == x;
}