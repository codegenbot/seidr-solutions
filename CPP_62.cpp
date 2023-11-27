vector<float> result;

for(int i=1;i<xs.size();i++)
{
    float derivativeTerm = xs[i]*i;
    result.push_back(derivativeTerm);
}

return result;