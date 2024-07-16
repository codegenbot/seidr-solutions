if(a == 0) return true;
int cube_root = round(cbrt(abs(a)));
return cube_root * cube_root * cube_root == abs(a);
}